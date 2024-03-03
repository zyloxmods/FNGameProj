#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnicornAthenaPawnSampler.generated.h"

class AFortPawn;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UUnicornAthenaPawnSampler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldListenOutToDBNOEvent;
    
public:
    UUnicornAthenaPawnSampler();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePawnDBNOChanged(AFortPawn* FortPawn, bool bInIsDBNO);
    
};

