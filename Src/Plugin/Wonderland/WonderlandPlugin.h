/*
 * This source file is part of Wonderland, the C++ Cross-platform middleware for game
 *
 * For the latest information, see https://github.com/prophecy/Wonderland
 *
 * The MIT License (MIT)
 * Copyright (c) 2015 Adawat Chanchua
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

// Application starts all managers

#ifndef __WONDERLAND_PLUGIN_H__
#define __WONDERLAND_PLUGIN_H__

#include "Utility/Memory/WonderPtr.h"

#include "IPlugin.h"
#include "IApplication.h"
#include "ISceneManager.h"

class WonderlandPlugin : public IPlugin
{
public:
	virtual void Create(WonderPtr<IApplication>	application);
	virtual void Destroy() {}
	virtual void Start() {}
	virtual void Stop() {}
	virtual void Resume() {}
	virtual void Pause() {}
    virtual void Update();
    
private:
	WonderPtr<IApplication>	application;
};

#endif // __WONDERLAND_PLUGIN_H__