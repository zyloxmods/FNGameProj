#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/CurveTable.h"
#include "AnyPropertyChangedDelegateDelegate.h"
#include "FortPropertyOverrideProvider.h"
#include "LevelSaveSpawnable.h"
#include "PropertyOverrideData.h"
#include "FortActorOptionsComponent.generated.h"

class AFortPawn;
class AFortPlayerPawn;
class UFortItemDefinition;
class UPlaylistUserOptions;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortActorOptionsComponent : public UActorComponent, public ILevelSaveSpawnable, public IFortPropertyOverrideProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionsDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionsDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle InteractionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> OptionsItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptions* PlayerOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PlayerOptionData, meta=(AllowPrivateAccess=true))
    FPropertyOverrideData PlayerOptionData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyPropertyChangedDelegate OnAnyPropertyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnyPropertyChangedDelegate OnPropertiesLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRedirectInteractToParent;
    
    UFortActorOptionsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetPropertyOverrideValues(const TMap<FString, FString>& NewOptions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetPropertyOverrides(const TMap<FString, FString>& NewOptions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePropertyOverrides(const TArray<FString>& Options);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerOptionData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyOverrides(TMap<FString, FString>& CurrentOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOptionsText(FText& DisplayName, FText& Descriptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEditOptionsComponent(AFortPawn* InteractingPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    bool BlueprintOnLocalInteract(AFortPlayerPawn* InteractingPawn);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool GetPropertyOverrideData(const FString& PropertyScope, FPropertyOverrideData& OutPropertyOverrides) const override PURE_VIRTUAL(GetPropertyOverrideData, return false;);
    
};

