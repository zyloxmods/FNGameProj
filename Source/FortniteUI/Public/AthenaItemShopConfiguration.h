#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortItemShopSection.h"
#include "AthenaCatabaConfiguration.h"
#include "AthenaItemShopReloadMtxInfo.h"
#include "AthenaItemShopSectionDisplayData.h"
#include "AthenaItemShopConfiguration.generated.h"

class UCatalogMessaging;

UCLASS(Blueprintable, Config=Game)
class UAthenaItemShopConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaItemShopSectionDisplayData ItemShopSectionDisplayDataList[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaCatabaConfiguration CatabaConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaItemShopReloadMtxInfo ItemShopReloadMtxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattlePassSectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatalogMessaging* TileViolatorTextTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemShopSection> DefaultItemShopOrdering;
    
public:
    UAthenaItemShopConfiguration();
};

