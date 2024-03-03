#pragma once
#include "CoreMinimal.h"
#include "Components/ListViewBase.h"
#include "BattlePassLeaderboardListView.generated.h"

UCLASS(Blueprintable)
class UBattlePassLeaderboardListView : public UListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstEntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
public:
};

