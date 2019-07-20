# MiniLogger: a home-brewed logger 

一个很简单的日志类，没什么复杂功能，就是往控制台输出。

是我在开发ropevm(一个支持object level speculative multi-threading java vm)的过程中出于调试需要一步步发展出来的。

支持多级logger级联控制。

使用的时候把自己定义的众多logger集中起来放在同一个.cpp文件中，然后在此处进行控制。

具体的使用例子，可以参考cpps