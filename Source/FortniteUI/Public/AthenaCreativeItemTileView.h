#pragma once
#include "CoreMinimal.h"
#include "CommonTileView.h"
#include "AthenaCreativeItemTileView.generated.h"

class UFortItem;
class UFortOptionsTab;

UCLASS(Blueprintable)
class UAthenaCreativeItemTileView : public UCommonTileView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortOptionsTab* ParentTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* CurrentlyFocusedItem;
    
    UAthenaCreativeItemTileView();
};

