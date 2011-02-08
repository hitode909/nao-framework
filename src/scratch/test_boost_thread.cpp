/*
 * 参考
 * http://www.boost.org/doc/libs/1_31_0/libs/thread/doc/thread.html#class-thread
 * http://www.kmonos.net/alang/boost/classes/bind.html
 */
#include<iostream>
#include<string>
#include<boost/format.hpp>
#include<boost/thread.hpp>
#include<boost/bind.hpp>
using namespace std;

void greeting()
{
  cout << "Hello, World!" << endl;
}

void greetingWithID(int tid)
{
  cout << boost::format("[thread %02d]: Hello, World!") % tid << endl;
}

int main()
{
  // 本来はconst boost::function0<void>& 型を渡す
  boost::thread thread(greeting); // スレッド起動
  thread.join();
    
  // 複数のスレッドの管理
  const int n = 8;
  boost::thread *threads[n];
  for (int i = 0; i < n; i++)
    threads[i] = new boost::thread(greeting);
  for (int i = 0; i < n; i++)
    threads[i]->join();
    
  // スレッドグループで複数のスレッドを管理; boost::thread_group
  boost::thread_group group;
  for (int i = 0; i < n; i++)
    group.create_thread(greeting);
  group.join_all();
    
  // boost::bindで、スレッドを引数付きで起動
  boost::thread_group agroup;
  for (int i = 0; i < n; i++)
    agroup.create_thread(boost::bind(greetingWithID, i));
  agroup.join_all();
  return 0;
}
