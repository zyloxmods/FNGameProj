#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortGameFeature.h"
#include "EAthenaGameFeatureStatus.h"
#include "AthenaGameFeatureStatus.generated.h"

class UCommonNumericTextBlock;
class UCommonTextBlock;
class UFortLazyImage;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGameFeatureStatus : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProgressStatusToastTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameFeature GameFeature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendedDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExtendedDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DownloadingIconAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> InitialToastNotificationIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DownloadingIconMaterialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_DownloadingIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* Text_ProgressPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ExtendedDisplayText;
    
public:
    UAthenaGameFeatureStatus();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusChanged(EAthenaGameFeatureStatus NewStatus);
    
};

