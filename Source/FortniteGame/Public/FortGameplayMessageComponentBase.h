#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "CreativeEditablePropertyInterface.h"
#include "FortCreativeToyOptionInterface.h"
#include "LevelSaveSpawnable.h"
#include "OnChannelIdsReplicatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortGameplayMessageComponentBase.generated.h"

class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameplayMessageComponentBase : public UActorComponent, public ILevelSaveSpawnable, public IFortCreativeToyOptionInterface, public ICreativeEditablePropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChannelIdsReplicated OnChannelIdsReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ChannelIds, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ChannelIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EditWidget;
    
public:
    UFortGameplayMessageComponentBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetChannelId(const FGameplayTagContainer& NewChannelIds);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChannelIds();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChannelIdSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMessageName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMessageDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMessageChannelIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisabledReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetChannelId() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

