#pragma once
#include "CoreMinimal.h"
#include "AthenaItemShopSection_Storefront.h"
#include "AthenaItemShopSection_BattlePass.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSection_BattlePass : public UAthenaItemShopSection_Storefront {
    GENERATED_BODY()
public:
    UAthenaItemShopSection_BattlePass();
};

