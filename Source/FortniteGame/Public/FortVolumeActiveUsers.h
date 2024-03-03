#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VolumePlayerStateInfo.h"
#include "FortVolumeActiveUsers.generated.h"

class AFortVolumeManager;

USTRUCT(BlueprintType)
struct FFortVolumeActiveUsers : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVolumePlayerStateInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortVolumeManager* Manager;
    
public:
    FORTNITEGAME_API FFortVolumeActiveUsers();
};

