#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortBorderStyleList.generated.h"

class UCommonBorderStyle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBorderStyleList : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BordersPath;
    
    UFortBorderStyleList();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<UCommonBorderStyle>> GetBorderStyles() const;
    
};

