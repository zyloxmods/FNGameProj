#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "WidgetLayoutProxy.h"
#include "WidgetMappingContainer.h"
#include "WidgetPropertyUpgradeData.h"
#include "WidgetVisibilityOverride.h"
#include "MobileHUDLayoutLegacyConverter.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMobileHUDLayoutLegacyConverter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ConvertedProfiletName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> GlobalTagClassOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetMappingContainer> TagMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetVisibilityOverride> VisibilityOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetPropertyUpgradeData> PropertyUpgradeMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetLayoutProxy> WidgetLayoutProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LegacyCanvasSize;
    
public:
    UMobileHUDLayoutLegacyConverter();
};

