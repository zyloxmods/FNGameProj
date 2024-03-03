#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/ListViewBase.h"
#include "AthenaMapChallengeListView.generated.h"

UCLASS(Blueprintable)
class UAthenaMapChallengeListView : public UListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
public:
};

