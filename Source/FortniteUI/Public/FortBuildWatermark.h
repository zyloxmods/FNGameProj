#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortBuildWatermark.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortBuildWatermark : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_BuildWatermark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_McpVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_CalendarOffset;
    
public:
    UFortBuildWatermark();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWatermark();
    
};

