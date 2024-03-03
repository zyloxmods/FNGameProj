#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDynamicBackgroudKey.h"
#include "DynamicBackgroundDirector.generated.h"

class UTexture;

UCLASS(Blueprintable)
class ADynamicBackgroundDirector : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRequestDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnvironmentChangedDynamic, const FString&, PresetEnvironmentName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnvironmentBackgroundTextureChangedDynamic, UTexture*, BackgroundImage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnteredStore);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnteredItemShop);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDonutSetupLateStore);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDonutSequencePlayDonutDrop);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDonutSequenceInitiated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutSequenceInitiated BP_OnDonutSequenceInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredItemShop BP_OnEnteredItemShop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredStore BP_OnEnteredStore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutSequencePlayDonutDrop BP_OnDonutSequencePlayDonutDrop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnvironmentChangedDynamic BP_OnEnvironmentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnvironmentBackgroundTextureChangedDynamic BP_OnEnvironmentBackgroundTextureChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestDelegate BP_OnRequestShowBackground;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestDelegate BP_OnRequestHideBackground;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicBackgroudKey DynamicBackgroundKey;
    
public:
    ADynamicBackgroundDirector();
    UFUNCTION(BlueprintCallable)
    void TryForceSetupDonutStore();
    
    UFUNCTION(BlueprintCallable)
    void SetIsInDonutSequence(bool bIsInSequence);
    
    UFUNCTION(BlueprintCallable)
    void ResetDonutShopSeen();
    
    UFUNCTION(BlueprintCallable)
    void RequestDonutUIPlayAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnDonutSequenceInitiated();
    
    UFUNCTION(BlueprintCallable)
    void MarkDonutSequenceSeen();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasDonutShopSequenceBeenSeen();
    
};

