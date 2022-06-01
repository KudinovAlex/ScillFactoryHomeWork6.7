//#include "Store.h"
//
//Store::Store(int size) : _size(size), _position(0), _copyNumber(0)
//{
//	_store_ptr = new IElectronics * [_size];
//	for (int i = 0; i < _size; i++) {
//		_store_ptr[i] = nullptr;
//	}
//}
//
//Store::Store(const Store& other)
//{
//	_size = other._size;
//	_position = other._position;
//	_copyNumber += other._copyNumber;
//	_store_ptr = new IElectronics * [_size];
//	for (int i = 0; i < _size; i++) {
//		_store_ptr[i] = other._store_ptr[i] != nullptr ? new IElectronics { *other._store_ptr[i] } : nullptr;
//	}
//}
