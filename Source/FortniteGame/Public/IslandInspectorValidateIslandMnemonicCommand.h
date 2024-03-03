#pragma once
#include "CoreMinimal.h"
#include "IslandInspectorCommand.h"
#include "IslandInspectorValidateIslandMnemonicCommand.generated.h"

UCLASS(Blueprintable)
class UIslandInspectorValidateIslandMnemonicCommand : public UIslandInspectorCommand {
    GENERATED_BODY()
public:
    UIslandInspectorValidateIslandMnemonicCommand();
};

