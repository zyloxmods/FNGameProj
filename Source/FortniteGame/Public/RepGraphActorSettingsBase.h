#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphTypes.h"
#include "EClassRepNodeMapping.h"
#include "RepGraphActorSettingsBase.generated.h"

USTRUCT(BlueprintType)
struct FRepGraphActorSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAddClassRepInfoToMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCustomClassRepInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAddToExplicitCSVStatTracker: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAddToImplicitCSVStatTracker: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAddToRPC_Multicast_OpenChannelForClassMap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRPC_Multicast_OpenChannelForClass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EClassRepNodeMapping> ClassNodeMapping;
    
    //UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
  //  FClassReplicationInfo ClassRepInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CSVStatNamePrefix;
    
    FORTNITEGAME_API FRepGraphActorSettingsBase();
};

