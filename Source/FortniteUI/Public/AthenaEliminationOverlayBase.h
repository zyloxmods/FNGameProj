#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaEliminationOverlayBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEliminationOverlayBase : public UUserWidget {
    GENERATED_BODY()
public:
    UAthenaEliminationOverlayBase();
};

