#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBannerUsageContext.h"
#include "HomebaseBannerColor.h"
#include "FortBannerUtilities.generated.h"

class AFortPlayerController;
class UFortAccountItem;
class UFortHomebaseBannerColorItem;
class UFortHomebaseBannerIconItem;
class UFortHomebaseBannerIconItemDefinition;
class UTexture2D;

UCLASS(Blueprintable)
class UFortBannerUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortBannerUtilities();
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UFortHomebaseBannerIconItemDefinition> GetSoftBannerDefinitionFromLegacyName(const FName BannerIconRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetSecondaryColor(const FHomebaseBannerColor& BannerColor);
    
    UFUNCTION(BlueprintCallable)
    static FName GetRowNameForBannerIconItem(UFortHomebaseBannerIconItem* BannerIcon);
    
    UFUNCTION(BlueprintCallable)
    static FName GetRowNameForBannerColorItem(UFortHomebaseBannerColorItem* BannerColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetPrimaryColor(const FHomebaseBannerColor& BannerColor);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetBannerSmallIconAssetFromRowName(const FName BannerIconRowName, EBannerUsageContext Usage);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetBannerSmallIconAsset(UFortHomebaseBannerIconItem* BannerIcon, EBannerUsageContext Usage);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetBannerLargeIconAssetFromRowName(const FName BannerIconRowName, EBannerUsageContext Usage);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetBannerLargeIconAsset(UFortHomebaseBannerIconItem* BannerIcon, EBannerUsageContext Usage);
    
    UFUNCTION(BlueprintCallable)
    static void GetBannerIconsForCategory(AFortPlayerController* FortPC, const FName CategoryRowName, TArray<UFortAccountItem*>& BannerIcons);
    
    UFUNCTION(BlueprintCallable)
    static UFortHomebaseBannerIconItem* GetBannerIconItemFromRowName(AFortPlayerController* FortPC, const FName BannerIconRowName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetBannerIconCategoryRowName(const FName BannerIconRowName);
    
    UFUNCTION(BlueprintCallable)
    static FText GetBannerIconCategoryName(const FName CategoryRowName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBannerFullUsageRightsFromRowName(const FName BannerIconRowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetBannerColorsForCategory(AFortPlayerController* FortPC, const FName CategoryRowName, TArray<UFortAccountItem*>& BannerColors);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetBannerColorSecondaryColorFromRowName(const FName BannerColorRowName);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetBannerColorSecondaryColor(const UFortHomebaseBannerColorItem* BannerColor);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetBannerColorPrimaryColorFromRowName(const FName BannerColorRowName);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetBannerColorPrimaryColor(const UFortHomebaseBannerColorItem* BannerColor);
    
    UFUNCTION(BlueprintCallable)
    static UFortHomebaseBannerColorItem* GetBannerColorItemFromRowName(AFortPlayerController* FortPC, const FName BannerColorRowName);
    
    UFUNCTION(BlueprintCallable)
    static FHomebaseBannerColor GetBannerColorFromRowName(const FName BannerColorRowName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetBannerColorCategoryRowName(const FName BannerColorRowName);
    
    UFUNCTION(BlueprintCallable)
    static FText GetBannerColorCategoryName(const FName CategoryRowName);
    
    UFUNCTION(BlueprintCallable)
    static FHomebaseBannerColor GetBannerColor(UFortHomebaseBannerColorItem* BannerColor);
    
};

