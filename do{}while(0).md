#### tips  

#### do{}while(0)使用 
- 1.帮助定义复杂的宏定义
- 2.避免goto,增强代码可阅读性:  
 ```c
 if fail:
  goto EXIT;
 if fail: 
  goto EXIT;
  ...
 EXIT:
  destroy()
 可以改为：
 do
 {
  if fail: 
    break;
 }while(0);
 destory()
 ```
- 3.避免空宏编译警告
- 4.将复杂流程代码块打包成一个整体


<pre>
资料来源: http://www.cnblogs.com/lanxuezaipiao/p/3535674.html
</pre>
