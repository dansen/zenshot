/* Copyright (C) 2021 Nature Easy Soft Network Technology Co., LTD
 *
 * This file is part of Zenshot (https://github.com/easysoft/zenshot/).
 *
 * Zenshot is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Zenshot is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Zenshot. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef CURVEBAR_H
#define CURVEBAR_H

#include "core/propsbar.h"
#include "controls/colorwidget.h"
#include "controls/sizeinputwidget.h"

/**
 * @class : CurveBar
 * @brief : 铅笔属性面板定义
 * @note  : 管理铅笔属性设置
 */
class CurveBar : public PropsBar
{
    Q_OBJECT
public:
    explicit CurveBar(Workspace *m_workspace);

private:
    ColorWidget *m_colorWidget;   //颜色组件对象
    SizeInputWidget *m_sizeWidget;     //尺寸组件对象

protected:
    void createWidget();
    void loadProps();
    void saveProps();
    void connectEvents();
};

#endif // CURVEBAR_H
