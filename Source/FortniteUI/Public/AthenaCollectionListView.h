#pragma once
#include "CoreMinimal.h"
#include "Components/ListViewBase.h"
#include "AthenaCollectionListView.generated.h"

UCLASS(Blueprintable)
class UAthenaCollectionListView : public UListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRows;
    
public:
};

