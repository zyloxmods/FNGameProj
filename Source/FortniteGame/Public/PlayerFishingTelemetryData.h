#pragma once
#include "CoreMinimal.h"
#include "PlayerFishingTelemetryData.generated.h"

class AActor;
class AFortPickup;

USTRUCT(BlueprintType)
struct FPlayerFishingTelemetryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float TimeFishingSessionBegan;
    
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPickup> Item;
    
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ItemUsedToFish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bFromFishingPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bBestCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString FishVariantTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float FishPropertyLength;
    
    FORTNITEGAME_API FPlayerFishingTelemetryData();
};

