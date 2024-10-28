# awtk-nodejs

ZLG 开源 GUI 引擎 [awtk](https://github.com/zlgopen/awtk) 针对 NodeJS [NodeJS](https://nodejs.org) 的绑定。

## 准备

> 请先安装 NodeJS [NodeJS](https://nodejs.org)

1. 获取 awtk 并编译

```
git clone https://github.com/zlgopen/awtk.git
cd awtk; scons; cd -
```

> AWTK 的编译环境请参考 AWTK 的文档。

2. 获取 awtk-nodejs 并编译

```
git clone https://github.com/zlgopen/awtk-nodejs.git
cd awtk-nodejs
```

如果没有安装node-gyp，请用下列命令安装：

```
npm install -g node-gyp nan
node-gyp configure
```

```
npm install
npm run build;
```

## 运行

```
node demos/xxx.js
```

> 请把 xxxx.js 换成具体的 js 文件。

```
node demos/demoui.js
```

## 更新绑定(由本项目的维护人员完成)

```
./sync.sh
```

> 在非 bash 终端（如 Windows 平台的 cmd.exe)，需要根据 sync.sh 的内容手工执行相应的命令。

## 文档

* [AWTK JS API 文档](https://github.com/zlgopen/awtk-binding/tree/master/docs/js)

* [AWTK 脚本绑定原理](https://github.com/zlgopen/awtk/blob/master/docs/script_binding.md)


> 本文以 Linux/MacOS 为例，Windows 可能会微妙差异，请酌情处理。

## 注意事项

如果希望自己的应用程序，同时支持 AWTK-JS 和 AWTK-WEB，还需要注意下列事项：

* 避免直接调用 gc() 函数。

* 避免使用模态对话框。

* 避免使用动态 GIF 图片。

* 避免直接使用 value\_t/color\_t/bitmap\_t/object\_t 等类。

* 编译 PC 版本，请把 src/c/custom.c 中的APP\_SIMULATOR 改成 APP\_DESKTOP，并重新编译。

## Problems

### 1. linux 

* error

```
/home/lixianjing/work/awtk-root/awtk-nodejs/node_modules/bindings/bindings.js:121
        throw e;
        ^

Error: libawtk.so: cannot open shared object file: No such file or directory
    at Module._extensions..node (node:internal/modules/cjs/loader:1319:18)
    at Module.load (node:internal/modules/cjs/loader:1091:32)
    at Module._load (node:internal/modules/cjs/loader:938:12)
    at Module.require (node:internal/modules/cjs/loader:1115:19)
    at require (node:internal/modules/helpers:119:18)
    at bindings (/home/lixianjing/work/awtk-root/awtk-nodejs/node_modules/bindings/bindings.js:112:48)
    at Object.<anonymous> (/home/lixianjing/work/awtk-root/awtk-nodejs/awtk.js:1:31)
    at Module._compile (node:internal/modules/cjs/loader:1233:14)
    at Module._extensions..js (node:internal/modules/cjs/loader:1287:10)
    at Module.load (node:internal/modules/cjs/loader:1091:32) {
  code: 'ERR_DLOPEN_FAILED'
}
```

* fix:

```
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./build/Release/
```



