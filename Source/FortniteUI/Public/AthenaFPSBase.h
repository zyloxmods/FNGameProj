#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaFPSBase.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaFPSBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FPS;
    
public:
    UAthenaFPSBase();
};

