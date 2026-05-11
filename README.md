# QWidgetDemo

一个基于 **Qt 6** 的 Widget 演示项目，展示了 Qt Widget 的基本使用方法、信号与槽机制、以及窗口管理等核心功能。

---

## 功能特性

### 1. 文本对齐设置
- 支持左对齐、居中、右对齐三种对齐方式
- 使用 `QButtonGroup` 管理单选按钮组
- 实时更新文本框中文本的对齐状态

### 2. 字体样式设置
- 内嵌窗口形式展示字体设置面板
- 支持粗体、斜体、下划线三种样式独立切换
- 使用信号与槽机制实现跨窗口通信

### 3. 颜色设置
- 独立窗口形式展示颜色选择器
- 支持红色、绿色、蓝色三种文字颜色
- 通过 `QButtonGroup` 管理颜色选项

### 4. 窗口操作
- 获取窗口几何信息（位置和尺寸）
- 动态调整窗口大小
- 移动窗口到指定位置

### 5. 窗口属性设置
- 动态设置窗口标题
- 加载资源文件中的窗口图标

---

## 项目结构

```
QWidgetDemo/
├── main.cpp           # 应用程序主入口
├── mywidget.h         # 主窗口类头文件
├── mywidget.cpp       # 主窗口类实现
├── mywidget.ui        # 主窗口 UI 设计文件（Qt Designer）
├── fontform.h         # 字体设置窗口类头文件
├── fontform.cpp       # 字体设置窗口类实现
├── fontform.ui        # 字体设置窗口 UI 设计文件
├── colorform.h        # 颜色设置窗口类头文件
├── colorform.cpp      # 颜色设置窗口类实现
├── colorform.ui       # 颜色设置窗口 UI 设计文件
├── res.qrc            # Qt 资源文件（包含图标等资源）
├── CMakeLists.txt     # CMake 构建配置文件
├── .clangd            # Clangd 语言服务器配置
└── README.md          # 项目说明文档
```

---

## 技术栈

| 组件 | 版本 | 说明 |
|------|------|------|
| Qt | 6.8.3 | 主要开发框架 |
| Qt Widgets | 6.x | UI 组件库 |
| CMake | 3.19+ | 构建工具 |
| MinGW | 64-bit | Windows 编译器 |
| C++ | C++17 | 编程语言标准 |

---

## 编译与运行

### 环境要求

- **Qt 6.5+**（推荐 6.8.3）
- **CMake 3.19+**
- **MinGW 64-bit** 编译器

### 编译步骤

#### Windows 环境

```powershell
# 进入项目目录
cd QWidgetDemo

# 创建构建目录
mkdir -p build\Desktop_Qt_6_8_3_MinGW_64_bit-Debug
cd build\Desktop_Qt_6_8_3_MinGW_64_bit-Debug

# 设置 Qt 环境变量
$env:PATH = "D:\QT\6.8.3\mingw_64\bin;" + $env:PATH

# 使用 Qt CMake 配置项目
& "D:\QT\6.8.3\mingw_64\bin\qt-cmake.bat" ..\..

# 编译项目（Debug 模式）
cmake --build .
```

#### Linux / macOS 环境

```bash
# 进入项目目录
cd QWidgetDemo

# 创建构建目录
mkdir -p build && cd build

# 使用 Qt CMake 配置项目
qt-cmake ..

# 编译项目
cmake --build . -j$(nproc)
```

### 运行

编译成功后，在构建目录中找到可执行文件并运行：

- **Windows**: `QWidgetDemo.exe`
- **Linux**: `./QWidgetDemo`
- **macOS**: `QWidgetDemo.app`

---

## 使用说明

### 界面布局

主窗口分为以下几个功能区域：

1. **文本显示区**：展示时间文本，用于演示对齐、字体和颜色效果
2. **对齐设置区**：三个单选按钮，控制文本对齐方式
3. **字体设置区**：内嵌的字体设置面板（粗体、斜体、下划线）
4. **颜色设置区**：按钮打开独立的颜色选择窗口
5. **窗口操作区**：获取窗口信息、调整大小、移动窗口
6. **窗口属性区**：设置窗口标题和图标

### 操作指南

| 功能 | 操作方式 | 说明 |
|------|----------|------|
| 文本对齐 | 点击单选按钮 | 实时更新文本框对齐方式 |
| 字体样式 | 勾选复选框 | 组合使用可设置多种样式 |
| 颜色设置 | 点击按钮打开窗口 | 在弹出窗口中选择颜色 |
| 获取窗口信息 | 点击"获取窗口几何信息" | 显示窗口位置和尺寸 |
| 调整窗口大小 | 点击"调整大小" | 将窗口调整为 400x400 |
| 移动窗口 | 点击"移动窗口" | 将窗口移动到 (100, 100) |
| 设置标题 | 输入文本后点击按钮 | 动态更新窗口标题 |
| 更新图标 | 点击"更新窗口图标" | 加载资源文件中的图标 |

---

## 核心类设计

### MyWidget（主窗口类）

**职责**：作为应用程序的主窗口，管理所有子组件和功能模块

**关键成员**：
- `btnGroupAlignment`: QButtonGroup - 管理对齐单选按钮
- `colorForm`: ColorForm* - 颜色设置窗口实例

**主要方法**：
- `onBtnGroupAlignmentClicked(int id)` - 处理对齐按钮点击
- `onFontChanged(bool bold, bool italic, bool underline)` - 处理字体变化信号
- `onColorChange(int id)` - 处理颜色变化信号
- `on_btnGetWindowsGeometry_clicked()` - 获取窗口几何信息
- `on_btnResize_clicked()` - 调整窗口大小
- `on_pushButton_3_clicked()` - 移动窗口位置
- `on_btnSetWindowTitle_clicked()` - 设置窗口标题
- `on_btnUpdateWindowIcon_clicked()` - 更新窗口图标

### FontForm（字体设置窗口类）

**职责**：内嵌窗口，提供字体样式选择界面

**关键成员**：
- `chkBold`, `chkItalic`, `chkUnderline`: QCheckBox - 字体样式复选框

**信号**：
- `fontChanged(bool bold, bool italic, bool underline)` - 字体样式变化信号

### ColorForm（颜色设置窗口类）

**职责**：独立窗口，提供颜色选择界面

**关键成员**：
- `btnGroupColor`: QButtonGroup - 管理颜色单选按钮

**信号**：
- `colorChanged(int id)` - 颜色变化信号（0=红色, 1=绿色, 2=蓝色）

---

## 信号与槽机制

本项目充分展示了 Qt 的信号与槽机制：

### 信号连接示例

```cpp
// 主窗口中连接字体变化信号
connect(fontform, &FontForm::fontChanged, this, &MyWidget::onFontChanged);

// 主窗口中连接颜色变化信号
connect(colorForm, &ColorForm::colorChanged, this, &MyWidget::onColorChange);

// 字体窗口中连接复选框点击信号
connect(ui->chkBold, &QCheckBox::clicked, this, &FontForm::onChkFontClicked);

// 颜色窗口中连接按钮组点击信号
connect(btnGroupColor, &QButtonGroup::idClicked, this, &ColorForm::onBtnGroupColorClicked);
```

### 信号与槽流程图

```
用户操作 -> 信号发射 -> 槽函数响应 -> UI更新

例如：
用户勾选"粗体"复选框
    -> FontForm::fontChanged(true, ...) 信号
    -> MyWidget::onFontChanged() 槽函数
    -> 更新文本框字体样式
```

---

## 资源管理

项目使用 Qt 资源文件管理图标资源：

- **资源文件**: `res.qrc`
- **图标资源**: `:/res/star1.png`

在代码中通过 `QIcon(":/res/star1.png")` 加载资源。

---

## 常见问题

### Q: 编译时提示找不到 Qt 头文件？
**A**: 确保已正确设置 Qt 环境变量，或使用 `qt-cmake` 命令进行配置。

### Q: 运行时提示缺少 DLL 文件？
**A**: 将 Qt 安装目录下的 `bin` 文件夹添加到系统 PATH，或使用 `windeployqt` 工具部署依赖。

### Q: 窗口图标不显示？
**A**: 确保资源文件已正确编译，检查资源路径是否正确。

### Q: Clangd 无法找到 Qt 头文件？
**A**: 检查 `.clangd` 文件中的 `CompileFlags` 配置，确保 Qt 路径正确。

---

## 开发建议

1. **代码扩展**：可以添加更多字体样式选项（如字号、字体类型）
2. **颜色扩展**：可以使用 `QColorDialog` 提供更丰富的颜色选择
3. **持久化设置**：可以将用户设置保存到配置文件中
4. **国际化**：可以添加多语言支持

---

## 许可证

MIT License

---

## 贡献

欢迎提交 Issue 和 Pull Request！

---

*项目版本: 1.0.0*  
*最后更新: 2026年5月*