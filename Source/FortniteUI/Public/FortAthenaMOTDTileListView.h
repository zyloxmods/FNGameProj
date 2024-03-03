#pragma once
#include "CoreMinimal.h"
#include "Components/ListViewBase.h"
#include "FortAthenaMOTDTileListView.generated.h"

UCLASS(Blueprintable)
class UFortAthenaMOTDTileListView : public UListViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnFocusToSelection;
    
};

