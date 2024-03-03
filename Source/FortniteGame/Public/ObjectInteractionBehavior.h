#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OriginalAndSpawnedPair.h"
#include "Templates/SubclassOf.h"
#include "ObjectInteractionBehavior.generated.h"

class AActor;
class AFortCreativeMoveTool;
class AFortPlayerController;
class UFortGameplayAbility;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UObjectInteractionBehavior : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor HoverReticleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ActiveReticleColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InteractionClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> ValidAllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> ValidForbiddenClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> StartInteractionAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> EndInteractionAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> TriggerInteractionAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> RotateClockwiseAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> RotateCounterclockwiseAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> MirrorAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> ExitAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> FailAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAddToParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseActorToSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    UObjectInteractionBehavior();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerInteractionBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickMovementMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCreativeInteractionOnServer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCreativeInteractionOnClient();
    
    UFUNCTION(BlueprintCallable)
    void PlayGameplayAbility(const TSubclassOf<UFortGameplayAbility> ActivatedAbilityClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectPlacement(const TArray<UMeshComponent*>& Components, FOriginalAndSpawnedPair NewlyPlacedActorPair);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectionSetInValidPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDuplicateActor();
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedActorsMeshComponents(TArray<UMeshComponent*>& Components);
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedActors(TArray<AActor*>& SelectedActors);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerController* GetFortPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortCreativeMoveTool* GetFortCreativeMoveTool() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitCreativeInteraction(const bool bShouldClearActiveInteractionMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndCreativeInteraction();
    
};

