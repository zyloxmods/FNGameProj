#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PlaneSquadInfo.generated.h"

class AFortAthenaVehicle;
class AFortPlayerControllerAthena;
class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FPlaneSquadInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerAthena*> Controllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* LastDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlanesRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastCollectedChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaVehicle* LastCollectedChestVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastCollectedChestServerTime;
    
    FORTNITEGAME_API FPlaneSquadInfo();
};

