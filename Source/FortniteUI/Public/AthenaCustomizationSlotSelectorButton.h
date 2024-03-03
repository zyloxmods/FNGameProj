#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EAthenaCustomizationCategory.h"
#include "EFortBangType.h"
#include "GameplayTagContainer.h"
#include "AthenaCustomizationSlotSelectorButton.generated.h"

class UFortBangWrapper_NUI;
class UFortCosmeticItemCard;
class UFortItem;
class UFortMcpProfileCampaign;
class UImage;
class UMaterialInstance;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCustomizationSlotSelectorButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory CustomizationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubslotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBangType BangType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUnownedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneItemPerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* OverrideSlotImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredSlotGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DefaultEmptyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardWidth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* LocalCampaignHeroPartItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Favorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ClassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* Bang_Wrapper;
    
public:
    UAthenaCustomizationSlotSelectorButton();
    UFUNCTION(BlueprintCallable)
    void SetCustomizationType(EAthenaCustomizationCategory NewType, int32 InSubslotIndex, const FGameplayTag& RequiredSlotTag);
    
    UFUNCTION(BlueprintCallable)
    void SetCardDefaultImageAndWidth(const TSoftObjectPtr<UTexture2D>& InDefaultImage, float InWidth);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateExclusiveWarning(bool bShouldWarn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCardImageAndWidthChanged(const TSoftObjectPtr<UTexture2D>& Image, float Width);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotFilled() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomizationSlotActiveState(bool& bOutAttachableCosmeticAvailable, bool& bOutActive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetCampaignHeroPartItem() const;
    
};

