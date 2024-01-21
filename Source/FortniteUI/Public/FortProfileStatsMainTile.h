#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortProfileStatsMainTile.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortProfileStatsMainTile : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileTier;
    
public:
    UFortProfileStatsMainTile();
};

