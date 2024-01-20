#pragma once
#include "CoreMinimal.h"
#include "FortCloudSaveInfo.h"
#include "FortGenericRecord.h"
#include "FortPlayerRecord.h"
#include "FortZoneInstanceDetails.h"
#include "FortWorldRecord.generated.h"

UCLASS(Blueprintable)
class UFortWorldRecord : public UFortGenericRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortCloudSaveInfo CloudInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerRecord> SavedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortZoneInstanceDetails ZoneInstanceInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WUID;
    
public:
    UFortWorldRecord();
};

