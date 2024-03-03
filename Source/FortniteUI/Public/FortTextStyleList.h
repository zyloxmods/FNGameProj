#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortTextStyleList.generated.h"

class UCommonTextStyle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTextStyleList : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextStylesPath;
    
    UFortTextStyleList();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<UCommonTextStyle>> GetTextStyles() const;
    
};

