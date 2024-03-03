#pragma once
#include "CoreMinimal.h"
#include "FortMinigameLogicComponent.h"
#include "PlayerProgressDelegateDelegate.h"
#include "FortMinigameProgressComponent.generated.h"

class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMinigameProgressComponent : public UFortMinigameLogicComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProgressDelegate ProgressStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProgressDelegate ProgressFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProgressDelegate ProgressAbortedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProgressDelegate ProgressRevertedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ActivationTime;
    
    UFortMinigameProgressComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartProgress(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void RevertProgress(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivationTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishProgress(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void AbortProgress(APlayerState* PlayerState);
    
};

