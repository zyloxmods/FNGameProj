#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "FortHUDTargetUnderReticleWidget.generated.h"

class AActor;
class IFortHUDTargetUnderReticleInterface;
class UFortHUDTargetUnderReticleInterface;

UCLASS(Blueprintable, EditInlineNew)
class UFortHUDTargetUnderReticleWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortHUDTargetUnderReticleInterface> Target;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepTargetUntilNewValidTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetRequiredTags;
    
public:
    UFortHUDTargetUnderReticleWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void Setup(bool bInKeepTargetUntilNewValidTarget, FGameplayTagContainer InTargetRequiredTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetHealthChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetDied();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTargetActorDestroyed(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnHUDTargetUnderReticle(TScriptInterface<IFortHUDTargetUnderReticleInterface>& NewTarget);
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearTarget();
    
};

