//
// Created by RevenueCat on 3/2/20.
// Copyright (c) 2020 Purchases. All rights reserved.
//

class MockAttributionFetcher: RCAttributionFetcher {
    var receiptDataCalled = false
    var shouldReturnReceipt = true
    var receiptDataTimesCalled = 0

    override func identifierForVendor() -> String? {
        return "rc_idfv"
    }
}
