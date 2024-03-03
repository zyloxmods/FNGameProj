#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "ItemWidgetCreatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SeasonRewardsGridWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class USeasonRewardsGridWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ItemWidgetToCreate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemWidgetCreated OnItemWidgetCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ItemPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ColumnPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    USeasonRewardsGridWidget();
    UFUNCTION(BlueprintCallable)
    void Populate();
    
};

