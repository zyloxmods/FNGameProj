#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "EFortWeakPointState.h"
#include "FortOnWeakPointStateChangedDelegate.h"
#include "FortWeakPoint.generated.h"

class UFortWeakPointsCoordinatorComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class AFortWeakPoint : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnWeakPointStateChanged OnWeakPointStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortWeakPointsCoordinatorComponent* CachedWeakPointCoordinator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeakPointState, meta=(AllowPrivateAccess=true))
    EFortWeakPointState WeakPointState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName WeakPointAttachmentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayHealthBarWhenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRegisterForAimAssist;
    
public:
    AFortWeakPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakPointStateChanged(EFortWeakPointState CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeakPointState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortWeakPointState GetWeakPointState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWeakPointAttachmentSocketName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShapeComponent* GetAimAssistTargetComponent();
    
};

