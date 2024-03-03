#pragma once
#include "CoreMinimal.h"
#include "AthenaItemShopReloadMtxInfo.generated.h"

class UAthenaDynamicReloadMtxScreen;
class UAthenaReloadMtxIntroModalPopup;
class UAthenaReloadMtxScreen;

USTRUCT(BlueprintType)
struct FAthenaItemShopReloadMtxInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StaticStorefrontNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DynamicStorefrontNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncrementalStorefrontName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DynamicOtherOptionOfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMtxQuantityToShowDynamicReloadMtx;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaReloadMtxScreen> StaticReloadMtxScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaDynamicReloadMtxScreen> DynamicReloadMtxScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaReloadMtxIntroModalPopup> ReloadMtxIntroModalPopupClass;
    
public:
    FORTNITEUI_API FAthenaItemShopReloadMtxInfo();
};

