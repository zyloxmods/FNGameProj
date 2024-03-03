#pragma once
#include "CoreMinimal.h"
#include "Components/ListViewBase.h"
#include "BattlePassScreenListView.generated.h"

UCLASS(Blueprintable)
class UBattlePassScreenListView : public UListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CycleSocialPlayerRate;
    
public:
};

