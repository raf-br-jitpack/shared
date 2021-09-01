import SwiftUI
import Shared

struct ContentView: View {
	var body: some View {
        Text("Test").onAppear {
            let sharedComponents = Shared.IosModuleKt.iOSInit()
            print(sharedComponents)

            // ↓↓↓ START YOUR TEST CODE HERE ↓↓↓
            print("Hello, \(sharedComponents.thing)")
        }
    }
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
	ContentView()
	}
}
