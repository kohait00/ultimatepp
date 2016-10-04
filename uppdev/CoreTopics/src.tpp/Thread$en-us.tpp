topic "class Thread";
[2 $$0,0#00000000000000000000000000000000:Default]
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,0#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a17;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[{_} 
[s3; &]
[s1;:`:`:Thread`:`:class: [@(0.0.255) class]_[* Thread]&]
[s2;%% Encapsulation of thread.  &]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:Run`(`:`:Callback`): [@(0.0.255) bool]_[* Run]([_^`:`:Callback^ Callback
]_[*@3 cb])&]
[s2;%% Starts a new thread.&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:Wait`(`): [@(0.0.255) int]_[* Wait]()&]
[s2;%% Waits for started thread to finish. (`"join`").&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:IsOpen`(`)const: [@(0.0.255) bool]_[* IsOpen]()_[@(0.0.255) const]&]
[s2;%% Thread represents a running thread.&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:Start`(`:`:Callback`): [@(0.0.255) static] [@(0.0.255) void]_[* Start]([_^`:`:Callback^ C
allback]_[*@3 cb])&]
[s2;%% Starts a thread and returns immediately (you cannot Wait for 
the thread to finish in this case).&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:Sleep`(int`): [@(0.0.255) static] [@(0.0.255) void]_[* Sleep]([@(0.0.255) i
nt]_[*@3 ms])&]
[s2;%% Sleep for a given number of milliseconds.&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:IsST`(`): [@(0.0.255) static] [@(0.0.255) bool]_[* IsST]()&]
[s2;%% True is no thread was started yet.&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:GetCount`(`): [@(0.0.255) static] [@(0.0.255) int]_[* GetCount]()&]
[s2;%% Number of running threads.&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:ShutdownThreads`(`): [@(0.0.255) static] [@(0.0.255) void]_[* ShutdownTh
reads]()&]
[s2;%% Sets the `"Shutdown`" flag on.&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:IsShutdownThreads`(`): [@(0.0.255) static] [@(0.0.255) bool]_[* IsShutdo
wnThreads]()&]
[s2;%% True if ShutdownThreads was called.&]
[s3; &]
[s4; &]
[s5;:`:`:Thread`:`:`~Thread`(`): [@(0.0.255) `~][* Thread]()&]
[s2;%% Destructor. Thread continues running (and it is impossible 
to Wait for finish).&]
[s1;K:`:`:Mutex`:`:class: [@(0.0.255) class][@(64) _]Mutex&]
[s2;%%   &]
[s5;K:`:`:Mutex`:`:Enter`(`): [@(0.0.255) void][@(64) _]Enter[@(64) ()]&]
[s2;%%   &]
[s5;K:`:`:Mutex`:`:Leave`(`): [@(0.0.255) void][@(64) _]Leave[@(64) ()]&]
[s2;%%   &]
[s0;%% ]