#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManorPortal.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AManorPortal : public AActor {
    GENERATED_BODY()
public:
    AManorPortal();
    UFUNCTION(BlueprintCallable)
    void UnlockPortal(AFortPlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    void OpenUnlockMenu(AFortPlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    bool IsProfileValidToReadPortalAvailability(AFortPlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    bool IsPortalUnlocked(AFortPlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerCurrencyAmount(AFortPlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrencyCost(AFortPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnUnlockPortalComplete();
    
};

