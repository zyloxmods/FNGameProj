#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/ListViewBase.h"
#include "FortActivityListView.generated.h"

UCLASS(Blueprintable)
class UFortActivityListView : public UListViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
};

