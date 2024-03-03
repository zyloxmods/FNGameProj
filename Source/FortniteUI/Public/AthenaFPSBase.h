#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaFPSBase.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaFPSBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* FPS;
    
public:
    UAthenaFPSBase();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleShowFPSChanged(bool bInShowFPS);
    
};

