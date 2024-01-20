#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AthenaCosmeticMaterialOverride.h"
#include "FortAccountItemDefinition.h"
#include "FortCosmeticAdaptiveStatPreview.h"
#include "FortCosmeticVariantPreview.h"
#include "McpVariantChannelInfo.h"
#include "AthenaCosmeticItemDefinition.generated.h"

class AActor;
class UFortCosmeticVariant;
class UFortItem;
class UFortMontageItemDefinitionBase;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAthenaCosmeticItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsShuffleTile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PreviewPawnRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedCosmeticTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCosmeticMaterialOverride> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ObservedPlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMontageItemDefinitionBase*> BuiltInEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortCosmeticVariant*> ItemVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantChannelToUseForThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantPreview> ItemVariantPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DirectAquisitionStyleDisclaimerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticAdaptiveStatPreview> ItemObservedStatPreviews;
    
public:
    UAthenaCosmeticItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVariants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasModifiableVariants(UFortItem* InItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCosmeticVariant* GetVariantChannel(FGameplayTag InVariantChannelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPreviewPawnRotationOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCosmeticVariantPreview> GetItemVariantPreviews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCosmeticAdaptiveStatPreview> GetItemAdaptiveStatPreviews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDefaultVariantChannels(TArray<FMcpVariantChannelInfo>& OutDefaultVariantData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAdaptivePlayerStatsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyVariants(AActor* InActor, const TArray<FMcpVariantChannelInfo>& VariantChannels) const;
    
};

