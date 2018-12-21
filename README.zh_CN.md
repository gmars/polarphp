<p align="center">
   <img width="350" src ="https://raw.githubusercontent.com/polarphp/polarphp/master/assets/images/polarphp.png?sanitize=true"/>
</p>

## 为什么要做 polarphp 项目

随着`Go`和`NodeJS`的强势崛起，`PHP`的市场份额逐渐被蚕食，而`PHP`官方仍然坚守在`Web`编程领域，有些东西越是想守住就越守不住。`polarphp`借鉴`NodeJS`和`Go`的相关特性对`zendVM`重新封装，去掉`PHP`一些古老弃用的特性和强`Web`属性，通过实现一套新的运行时框架`libpdk`，将`PHP`语言打造成为一门真正的通用性脚本语言，赋能`PHP`，让其拥有异步编程，协程，线程，内置的`unicode`支持，标准的文件`IO`等等特性，让`PHP`程序员不仅仅能做`web`应用，也能从容面对真正的服务端应用。`polarphp`不是一门新的语言，而是`PHP`语言的一种运行时容器。

## 主要特性

- [ ] 兼容最新的`PHP`语言标准，移除废弃语言特性
- [ ] 内置`unicode`字符标准支持
- [ ] 全功能型运行时库支持，支持异步编程，多线程和协程等等编程模式
- [ ] 内置包管理器
- [ ] 内置文档生成器

## 开发计划

因为开发资源有限，开发计划暂定如下：

1. 使用`cmake`对`zend VM`进行编译，生成`polarphp`定制版的`PHP`语言虚拟机
2. 语言支持项目，语言测试框架，移植`LLVM`项目的`lit`测试框架
3. 实现`polarphp`驱动程序，实现从命令行执行`PHP`代码
4. 对`polarphp`虚拟机进行回归测试，暂定跑通`PHP`的语言虚拟机相关回归测试
5. 实现`polarphp`的内置函数
6. 发布核心虚拟机的`docker`镜像
7. 整合`libpdk`运行时框架
8. 实现人性化安装，尽量以最少的步骤进行`polarphp`的安装
9. 实现包管理器
10. 实现语言配套小工具，比如文档生成工具等等

## 社区
目前我们暂时只针对中国的用户，所以采用了微信和`QQ`群的交流方式，下面是二维码，有兴趣的同学可以扫码加入：

> PS：扫码请注明来意，比如：学习`polarphp`或者`PHP`爱好者

</div>
<table>
  <tbody>
    <tr>
      <td align="center" valign="middle">
        <a href="https://www.oschina.net/" target="_blank">
         <img width = "200" src="https://raw.githubusercontent.com/qcoreteam/zendapi/master/assets/images/qq.png"/>
        </a>
      </td>
      <td align="center" valign="middle">
        <a href="https://gitee.com/?from=polarphp.org" target="_blank">
          <img width = "200" src="https://raw.githubusercontent.com/qcoreteam/zendapi/master/assets/images/wechat.png"/></div>
        </a>
      </td>
    </tr><tr></tr>
  </tbody>
</table>

### 目前有以下工作组

1. 语言核心团队
2. 标准库团队
3. 生态链项目团队
4. 文档团队
5. 官方网站维护团队

## 授权协议

`polarphp`在`php`语言项目之上进行二次开发，遵守`php`项目的协议，详情请看：[项目协议](/LICENSE)

## 贡献代码引导
===========================
- [CODING_STANDARDS](docs/CODING_STANDARDS)
- [README.GIT-RULES](docs/README.GIT-RULES)
- [README.MAILINGLIST_RULES](docs/README.MAILINGLIST_RULES)
- [README.RELEASE_PROCESS](docs/README.RELEASE_PROCESS)

## 特别感谢
<!--特别感谢开始-->
<table>
  <tbody>
    <tr>
      <td align="center" valign="middle">
        <a href="https://www.oschina.net/" target="_blank">
          <img width="177px" src="https://raw.githubusercontent.com/polarphp/polarphp/master/assets/images/osc.svg?sanitize=true">
        </a>
      </td>
      <td align="center" valign="middle">
        <a href="https://gitee.com/?from=polarphp.org" target="_blank">
          <img width="177px" src="https://raw.githubusercontent.com/polarphp/polarphp/master/assets/images/gitee.svg?sanitize=true">
        </a>
      </td>
      <td align="center" valign="middle">
        <a href="http://www.hacknown.com/" target="_blank">
          <img width="177px" src="https://raw.githubusercontent.com/polarphp/polarphp/master/assets/images/hacknown.svg?sanitize=true">
        </a>
      </td>
    </tr><tr></tr>
  </tbody>
</table>
<!--特别感谢结束-->