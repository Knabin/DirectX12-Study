﻿#pragma once

// 인력 사무소
class Device
{
public:
	void Init();

	ComPtr<IDXGIFactory> GetDSGI() { return _dxgi; }
	ComPtr<ID3D12Device> GetDevice() { return _device; }

private:
	ComPtr<ID3D12Debug>		_debugController;
	ComPtr<IDXGIFactory>	_dxgi;		// 화면 관련 기능들
	ComPtr<ID3D12Device>	_device;	// 각종 객체 생성

};

