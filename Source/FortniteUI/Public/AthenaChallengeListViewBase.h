#pragma once
#include "CoreMinimal.h"
#include "Components/ListViewBase.h"
#include "AthenaChallengeListViewBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UAthenaChallengeListViewBase : public UListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
public:
};

