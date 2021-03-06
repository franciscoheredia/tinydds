const InstanceHandle_t HANDLE_NIL = 0;

const uint32_t LENGTH_UNLIMITED = -1;

const uint32_t DURATION_INFINITY_SEC = 134217727;

const uint32_t DURATION_INFINITY_NSEC = 134217727;

const uint32_t DURATION_ZERO_SEC = 0;

const uint32_t DURATION_ZERO_NSEC = 0;

const uint32_t TIMESTAMP_INVALID_SEC = -1;

//const uint32_t TIMESTAMP_INVALID_NSEC = 4294967295;

const ReturnCode_t RETCODE_OK = 0;

const ReturnCode_t RETCODE_ERROR = 1;

const ReturnCode_t RETCODE_UNSUPPORTED = 2;

const ReturnCode_t RETCODE_BAD_PARAMETER = 3;

const ReturnCode_t RETCODE_PRECONDITION_NOT_MET = 4;

const ReturnCode_t RETCODE_OUT_OF_RESOURCES = 5;

const ReturnCode_t RETCODE_NOT_ENABLED = 6;

const ReturnCode_t RETCODE_IMMUTABLE_POLICY = 7;

const ReturnCode_t RETCODE_INCONSISTENT_POLICY = 8;

const ReturnCode_t RETCODE_ALREADY_DELETED = 9;

const ReturnCode_t RETCODE_TIMEOUT = 10;

const ReturnCode_t RETCODE_NO_DATA = 11;

const StatusKind INCONSISTENT_TOPIC_STATUS = 1;

const StatusKind OFFERED_DEADLINE_MISSED_STATUS = 2;

const StatusKind REQUESTED_DEADLINE_MISSED_STATUS = 4;

const StatusKind OFFERED_INCOMPATIBLE_QOS_STATUS = 32;

const StatusKind REQUESTED_INCOMPATIBLE_QOS_STATUS = 64;

const StatusKind SAMPLE_LOST_STATUS = 128;

const StatusKind SAMPLE_REJECTED_STATUS = 256;

const StatusKind DATA_ON_READERS_STATUS = 512;

const StatusKind DATA_AVAILABLE_STATUS = 1024;

const StatusKind LIVELINESS_LOST_STATUS = 2048;

const StatusKind LIVELINESS_CHANGED_STATUS = 4096;

const StatusKind PUBLICATION_MATCH_STATUS = 8192;

const StatusKind SUBSCRIPTION_MATCH_STATUS = 16384;

const SampleStateKind READ_SAMPLE_STATE = 1;

const SampleStateKind NOT_READ_SAMPLE_STATE = 2;

const SampleStateMask ANY_SAMPLE_STATE = 65535;

const ViewStateKind NEW_VIEW_STATE = 1;

const ViewStateKind NOT_NEW_VIEW_STATE = 2;

const ViewStateMask ANY_VIEW_STATE = 65535;

const InstanceStateKind ALIVE_INSTANCE_STATE = 1;

const InstanceStateKind NOT_ALIVE_DISPOSED_INSTANCE_STATE = 2;

const InstanceStateKind NOT_ALIVE_NO_WRITERS_INSTANCE_STATE = 4;

const InstanceStateMask ANY_INSTANCE_STATE = 65535;

const InstanceStateMask NOT_ALIVE_INSTANCE_STATE = 6;

const char * USERDATA_QOS_POLICY_NAME = "UserData";

const char * DURABILITY_QOS_POLICY_NAME = "Durability";

const char * PRESENTATION_QOS_POLICY_NAME = "Presentation";

const char * DEADLINE_QOS_POLICY_NAME = "Deadline";

const char * LATENCYBUDGET_QOS_POLICY_NAME = "LatencyBudget";

const char * OWNERSHIP_QOS_POLICY_NAME = "Ownership";

const char * OWNERSHIPSTRENGTH_QOS_POLICY_NAME = "OwnershipStrength";

const char * LIVELINESS_QOS_POLICY_NAME = "Liveliness";

const char * TIMEBASEDFILTER_QOS_POLICY_NAME = "TimeBasedFilter";

const char * PARTITION_QOS_POLICY_NAME = "Partition";

const char * RELIABILITY_QOS_POLICY_NAME = "Reliability";

const char * DESTINATIONORDER_QOS_POLICY_NAME = "DestinationOrder";

const char * HISTORY_QOS_POLICY_NAME = "History";

const char * RESOURCELIMITS_QOS_POLICY_NAME = "ResourceLimits";

const char * ENTITYFACTORY_QOS_POLICY_NAME = "EntityFactory";

const char * WRITERDATALIFECYCLE_QOS_POLICY_NAME = "WriterDataLifecycle";

const char * READERDATALIFECYCLE_QOS_POLICY_NAME = "ReaderDataLifecycle";

const char * TOPICDATA_QOS_POLICY_NAME = "TopicData";

const char * GROUPDATA_QOS_POLICY_NAME = "GroupData";

const char * TRANSPORTPRIORITY_QOS_POLICY_NAME = "TransportPriority";

const char * LIFESPAN_QOS_POLICY_NAME = "Lifespan";

const QosPolicyId_t USERDATA_QOS_POLICY_ID = 1;

const QosPolicyId_t DURABILITY_QOS_POLICY_ID = 2;

const QosPolicyId_t PRESENTATION_QOS_POLICY_ID = 3;

const QosPolicyId_t DEADLINE_QOS_POLICY_ID = 4;

const QosPolicyId_t LATENCYBUDGET_QOS_POLICY_ID = 5;

const QosPolicyId_t OWNERSHIP_QOS_POLICY_ID = 6;

const QosPolicyId_t OWNERSHIPSTRENGTH_QOS_POLICY_ID = 7;

const QosPolicyId_t LIVELINESS_QOS_POLICY_ID = 8;

const QosPolicyId_t TIMEBASEDFILTER_QOS_POLICY_ID = 9;

const QosPolicyId_t PARTITION_QOS_POLICY_ID = 10;

const QosPolicyId_t RELIABILITY_QOS_POLICY_ID = 11;

const QosPolicyId_t DESTINATIONORDER_QOS_POLICY_ID = 12;

const QosPolicyId_t HISTORY_QOS_POLICY_ID = 13;

const QosPolicyId_t RESOURCELIMITS_QOS_POLICY_ID = 14;

const QosPolicyId_t ENTITYFACTORY_QOS_POLICY_ID = 15;

const QosPolicyId_t WRITERDATALIFECYCLE_QOS_POLICY_ID = 16;

const QosPolicyId_t READERDATALIFECYCLE_QOS_POLICY_ID = 17;

const QosPolicyId_t TOPICDATA_QOS_POLICY_ID = 18;

const QosPolicyId_t GROUPDATA_QOS_POLICY_ID = 19;

const QosPolicyId_t TRANSPORTPRIORITY_QOS_POLICY_ID = 20;

const QosPolicyId_t LIFESPAN_QOS_POLICY_ID = 21;

