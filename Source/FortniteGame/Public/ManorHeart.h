#pragma once
#include "CoreMinimal.h"
#include "KeepHeartBase.h"
#include "Templates/SubclassOf.h"
#include "ManorHeart.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class AManorHeart : public AKeepHeartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* KeepIconActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ContainerNamesToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> InfiniteStaminaEffect;
    
    AManorHeart();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TravelToNewWorld(const FString& NewTheaterId);
    
};

